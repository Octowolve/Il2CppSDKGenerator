#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NullTextWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "NullTextWriter"));
	}


	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(NullTextWriter*))(Il2CppBase() + 0x40091F0))(this);
	}
	template <typename T = void> T Write(Il2CppString* s) {
		return ((T (*)(NullTextWriter*, Il2CppString*))(Il2CppBase() + 0x4009290))(this, s);
	}
	template <typename T = void> T Write_1(char value) {
		return ((T (*)(NullTextWriter*, char))(Il2CppBase() + 0x4009294))(this, value);
	}
	template <typename T = void> T Write_2(Il2CppArray<uintptr_t>* value, int32_t index, int32_t count) {
		return ((T (*)(NullTextWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4009298))(this, value, index, count);
	}

};

}
