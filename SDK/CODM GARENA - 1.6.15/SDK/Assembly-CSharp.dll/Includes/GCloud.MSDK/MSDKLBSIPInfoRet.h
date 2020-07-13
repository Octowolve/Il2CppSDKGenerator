#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLBSIPInfoRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLBSIPInfoRet"));
	}

	template <typename T = Il2CppString*> T& country() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isByHeader() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Country() {
		return ((T (*)(MSDKLBSIPInfoRet*))(Il2CppBase() + 0x46CCDAC))(this);
	}
	template <typename T = void> T set_Country(Il2CppString* value) {
		return ((T (*)(MSDKLBSIPInfoRet*, Il2CppString*))(Il2CppBase() + 0x46CCDB4))(this, value);
	}
	template <typename T = bool> T get_IsByHeader() {
		return ((T (*)(MSDKLBSIPInfoRet*))(Il2CppBase() + 0x46CCDBC))(this);
	}
	template <typename T = void> T set_IsByHeader(bool value) {
		return ((T (*)(MSDKLBSIPInfoRet*, bool))(Il2CppBase() + 0x46CCDC4))(this, value);
	}

};

}
