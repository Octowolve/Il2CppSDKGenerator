#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinFactory"));
	}

	template <typename T = uintptr_t> T& mDolphinMgr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& mCallBackImp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mDateMgr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDolphinMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDolphinMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T CreateDolphinMgr(uintptr_t callBackImp, uintptr_t dateMgr) {
		return ((T (*)(DolphinFactory*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4521EC4))(this, callBackImp, dateMgr);
	}
	template <typename T = uintptr_t> T GetDolphinMgr() {
		return ((T (*)(DolphinFactory*))(Il2CppBase() + 0x4522264))(this);
	}

};

}
