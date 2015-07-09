#include <stdio.h>
#include <ftdi.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/usbdevice_fs.h>

int main(int argc, char** argv)
{
	// FT232 Control
	int f, usb_fd, fd, rc;
	char filename[200], bus[4], device[4], result[200];
	struct ftdi_context ftdic;

	printf("ftdi_usb_open\n");
	ftdi_init(&ftdic);
	f = ftdi_usb_open(&ftdic, 0x0403, 0x6001);
	if(f < 0) {
		fprintf(stderr, "ftdi_usb_open failed, error %d (%s)\n", f, ftdi_get_error_string(&ftdic));
		return -1;
	}

	int b = 0;//, i;
	while (1) {
//	for(i=0; i<3; i++){
		fprintf(stdout, "%x ", b);
		fflush(stdout);
		/*
		f = ftdi_set_bitmode(&ftdic, 0x10 | b, BITMODE_CBUS);
		if (f < 0) {
			fprintf(stderr, "ftdi_set_bitmode failed, error %d (%s)\n", f, ftdi_get_error_string(&ftdic));
			return -1;
		}
*/
		f = ftdi_setrts(&ftdic, b);
		usleep(4000000L);
		b = b ^ 0x01;
	}

	// USB Reset
	system("lsusb | grep FT232 > usblist");

	if((usb_fd = open("./usblist", O_RDONLY))){
		read(usb_fd, result, 200);
		memcpy(bus, &result[4], 3);
		bus[3]=0;
		memcpy(device, &result[15], 3);
		device[3]=0;
		close(usb_fd);
	}
	else{
		printf("Can not find usblist\n");
		return 1;
	}
	system("rm -f usblist");
	sprintf(filename, "/dev/bus/usb/%s/%s", bus, device);
	if((fd = open(filename, O_WRONLY)) < 0){
		printf("path error : %s\n", filename);
		return 1;
	}
	if((rc = ioctl(fd, USBDEVFS_RESET, 0)) < 0){
		printf("ioctl error\n");
		return 1;
	}

	printf("RFA1 Reset Done\n");
	return 0;
/*

	error = ftdi_usb_reset(&ftdic);
	if(error == 0) printf("RESET OK");
	else if(error == -1) printf("FTDI ERROR");
	else if(error == -2) printf("USB ERROR");
	return 0;
	*/
}
