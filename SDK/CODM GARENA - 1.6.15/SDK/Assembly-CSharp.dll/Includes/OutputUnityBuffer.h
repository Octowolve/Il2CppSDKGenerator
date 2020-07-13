#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OutputUnityBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OutputUnityBuffer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& offset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_write() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_toByteArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T write(unsigned char b) {
		return ((T (*)(OutputUnityBuffer*, unsigned char))(Il2CppBase() + 0x4AF61D0))(this, b);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T toByteArray() {
		return ((T (*)(OutputUnityBuffer*))(Il2CppBase() + 0x4AF62C4))(this);
	}
	template <typename T = uint32_t> T getLength() {
		return ((T (*)(OutputUnityBuffer*))(Il2CppBase() + 0x4AF6364))(this);
	}

};

}
