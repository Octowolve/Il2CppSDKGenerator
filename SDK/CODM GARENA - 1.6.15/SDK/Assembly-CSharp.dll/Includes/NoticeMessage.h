#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoticeMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoticeMessage"));
	}

	template <typename T = int32_t> T& what() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& intArg1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& intArg2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& strArg() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& custom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& datalen() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T clear() {
		return ((T (*)(NoticeMessage*))(Il2CppBase() + 0x454266C))(this);
	}

};

}
