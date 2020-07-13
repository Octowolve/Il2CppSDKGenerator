#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToPingInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToPingInfo"));
	}

	template <typename T = Il2CppList<void*>*> T& svrList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& groupId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSvrCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSvr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InsertIP(Il2CppString* ip, uint16_t port) {
		return ((T (*)(ToPingInfo*, Il2CppString*, uint16_t))(Il2CppBase() + 0x50CA380))(this, ip, port);
	}
	template <typename T = int32_t> T GetSvrCount() {
		return ((T (*)(ToPingInfo*))(Il2CppBase() + 0x50CB3B4))(this);
	}
	template <typename T = void*> T GetSvr(int32_t index) {
		return ((T (*)(ToPingInfo*, int32_t))(Il2CppBase() + 0x50CB488))(this, index);
	}

};

}
