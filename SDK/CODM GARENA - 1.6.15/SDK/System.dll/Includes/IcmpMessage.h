#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IcmpMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "IcmpMessage"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bytes() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = unsigned char> T get_Type() {
		return ((T (*)(IcmpMessage*))(Il2CppBase() + 0x3E4E044))(this);
	}
	template <typename T = unsigned char> T get_Code() {
		return ((T (*)(IcmpMessage*))(Il2CppBase() + 0x3E4E850))(this);
	}
	template <typename T = unsigned char> T get_Identifier() {
		return ((T (*)(IcmpMessage*))(Il2CppBase() + 0x3E4DFDC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Data() {
		return ((T (*)(IcmpMessage*))(Il2CppBase() + 0x3E4E080))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes() {
		return ((T (*)(IcmpMessage*))(Il2CppBase() + 0x3E4D84C))(this);
	}
	template <typename T = uint16_t> static T ComputeChecksum(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E4E7B0))(0, data);
	}
	template <typename T = uintptr_t> T get_IPStatus() {
		return ((T (*)(IcmpMessage*))(Il2CppBase() + 0x3E4E16C))(this);
	}

};

}
