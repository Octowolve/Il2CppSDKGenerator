#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PvpCommonTipsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PvpCommonTipsData"));
	}

	template <typename T = uintptr_t> T& iType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& sText() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& sExtraText() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& sImage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& iSortCacheValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& iDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
