#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKLBSLocationRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKLBSLocationRet"));
	}

	template <typename T = double> T& longitude() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = double> T& latitude() {
		return *(T*)((uintptr_t)this + 0x28);
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

	template <typename T = double> T get_Longitude() {
		return ((T (*)(MSDKLBSLocationRet*))(Il2CppBase() + 0x46CCF18))(this);
	}
	template <typename T = void> T set_Longitude(double value) {
		return ((T (*)(MSDKLBSLocationRet*, double))(Il2CppBase() + 0x46CCF24))(this, value);
	}
	template <typename T = double> T get_Latitude() {
		return ((T (*)(MSDKLBSLocationRet*))(Il2CppBase() + 0x46CCF34))(this);
	}
	template <typename T = void> T set_Latitude(double value) {
		return ((T (*)(MSDKLBSLocationRet*, double))(Il2CppBase() + 0x46CCF40))(this, value);
	}

};

}
