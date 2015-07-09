interface SPlug2{
	command void init();
	command void readWatt();
	event void readWattDone(uint32_t, uint32_t);
} 
