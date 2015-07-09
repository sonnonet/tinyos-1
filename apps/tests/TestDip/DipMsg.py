#
# This class is automatically generated by mig. DO NOT EDIT THIS FILE.
# This class implements a Python interface to the 'DipMsg'
# message type.
#

import tinyos.message.Message

# The default size of this message type in bytes.
DEFAULT_MESSAGE_SIZE = 1

# The Active Message type associated with this message.
AM_TYPE = 98

class DipMsg(tinyos.message.Message.Message):
    # Create a new DipMsg of size 1.
    def __init__(self, data="", addr=None, gid=None, base_offset=0, data_length=1):
        tinyos.message.Message.Message.__init__(self, data, addr, gid, base_offset, data_length)
        self.amTypeSet(AM_TYPE)
    
    # Get AM_TYPE
    def get_amType(cls):
        return AM_TYPE
    
    get_amType = classmethod(get_amType)
    
    #
    # Return a String representation of this message. Includes the
    # message type name and the non-indexed field values.
    #
    def __str__(self):
        s = "Message <DipMsg> \n"
        try:
            s += "  [type=0x%x]\n" % (self.get_type())
        except:
            pass
        try:
            pass
        except:
            pass
        return s

    # Message-type-specific access methods appear below.

    #
    # Accessor methods for field: type
    #   Field type: short
    #   Offset (bits): 0
    #   Size (bits): 8
    #

    #
    # Return whether the field 'type' is signed (False).
    #
    def isSigned_type(self):
        return False
    
    #
    # Return whether the field 'type' is an array (False).
    #
    def isArray_type(self):
        return False
    
    #
    # Return the offset (in bytes) of the field 'type'
    #
    def offset_type(self):
        return (0 / 8)
    
    #
    # Return the offset (in bits) of the field 'type'
    #
    def offsetBits_type(self):
        return 0
    
    #
    # Return the value (as a short) of the field 'type'
    #
    def get_type(self):
        return self.getUIntElement(self.offsetBits_type(), 8, 1)
    
    #
    # Set the value of the field 'type'
    #
    def set_type(self, value):
        self.setUIntElement(self.offsetBits_type(), 8, value, 1)
    
    #
    # Return the size, in bytes, of the field 'type'
    #
    def size_type(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of the field 'type'
    #
    def sizeBits_type(self):
        return 8
    
    #
    # Accessor methods for field: content
    #   Field type: short[]
    #   Offset (bits): 8
    #   Size of each element (bits): 8
    #

    #
    # Return whether the field 'content' is signed (False).
    #
    def isSigned_content(self):
        return False
    
    #
    # Return whether the field 'content' is an array (True).
    #
    def isArray_content(self):
        return True
    
    #
    # Return the offset (in bytes) of the field 'content'
    #
    def offset_content(self, index1):
        offset = 8
        if index1 < 0:
            raise IndexError
        offset += 0 + index1 * 8
        return (offset / 8)
    
    #
    # Return the offset (in bits) of the field 'content'
    #
    def offsetBits_content(self, index1):
        offset = 8
        if index1 < 0:
            raise IndexError
        offset += 0 + index1 * 8
        return offset
    
    #
    # Return the entire array 'content' as a short[]
    #
    def get_content(self):
        raise IndexError
    
    #
    # Set the contents of the array 'content' from the given short[]
    #
    def set_content(self, value):
        for index0 in range(0, len(value)):
            self.setElement_content(index0, value[index0])

    #
    # Return an element (as a short) of the array 'content'
    #
    def getElement_content(self, index1):
        return self.getUIntElement(self.offsetBits_content(index1), 8, 1)
    
    #
    # Set an element of the array 'content'
    #
    def setElement_content(self, index1, value):
        self.setUIntElement(self.offsetBits_content(index1), 8, value, 1)
    
    #
    # Return the size, in bytes, of each element of the array 'content'
    #
    def elementSize_content(self):
        return (8 / 8)
    
    #
    # Return the size, in bits, of each element of the array 'content'
    #
    def elementSizeBits_content(self):
        return 8
    
    #
    # Return the number of dimensions in the array 'content'
    #
    def numDimensions_content(self):
        return 1
    
    #
    # Return the number of elements in the array 'content'
    # for the given dimension.
    #
    def numElements_content(self, dimension):
        array_dims = [ 0,  ]
        if dimension < 0 or dimension >= 1:
            raise IndexException
        if array_dims[dimension] == 0:
            raise IndexError
        return array_dims[dimension]
    
    #
    # Fill in the array 'content' with a String
    #
    def setString_content(self, s):
         l = len(s)
         for i in range(0, l):
             self.setElement_content(i, ord(s[i]));
         self.setElement_content(l, 0) #null terminate
    
    #
    # Read the array 'content' as a String
    #
    def getString_content(self):
        carr = "";
        for i in range(0, 4000):
            if self.getElement_content(i) == chr(0):
                break
            carr += self.getElement_content(i)
        return carr
    