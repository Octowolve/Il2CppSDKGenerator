#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileVersion"));
	}

	template <typename T = uintptr_t> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& vMgr() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& mLastErr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateVersionMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteVersionMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLastErr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T CreateVersionMgr(uintptr_t CallbackImp, Il2CppString* config) {
		return ((T (*)(IIPSMobileVersion*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x498DB6C))(this, CallbackImp, config);
	}
	template <typename T = void> T DeleteVersionMgr() {
		return ((T (*)(IIPSMobileVersion*))(Il2CppBase() + 0x498E9F0))(this);
	}
	template <typename T = uint32_t> T GetLastErr() {
		return ((T (*)(IIPSMobileVersion*))(Il2CppBase() + 0x498EE70))(this);
	}

};

}
