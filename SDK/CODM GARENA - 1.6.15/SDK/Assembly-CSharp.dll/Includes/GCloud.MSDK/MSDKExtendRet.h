#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKExtendRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKExtendRet"));
	}

	template <typename T = Il2CppString*> T& channel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& extendMethodName() {
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

	template <typename T = Il2CppString*> T get_Channel() {
		return ((T (*)(MSDKExtendRet*))(Il2CppBase() + 0x46C0610))(this);
	}
	template <typename T = void> T set_Channel(Il2CppString* value) {
		return ((T (*)(MSDKExtendRet*, Il2CppString*))(Il2CppBase() + 0x46C0618))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtendMethodName() {
		return ((T (*)(MSDKExtendRet*))(Il2CppBase() + 0x46C0620))(this);
	}
	template <typename T = void> T set_ExtendMethodName(Il2CppString* value) {
		return ((T (*)(MSDKExtendRet*, Il2CppString*))(Il2CppBase() + 0x46C0628))(this, value);
	}

};

}
