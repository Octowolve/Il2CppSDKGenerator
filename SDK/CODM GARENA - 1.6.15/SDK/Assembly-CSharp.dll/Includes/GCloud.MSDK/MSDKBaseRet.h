#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.MSDK {

class MSDKBaseRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.MSDK", "MSDKBaseRet"));
	}

	template <typename T = int32_t> T& methodNameID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& retCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& retMsg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& thirdCode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& thirdMsg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& extraJson() {
		return *(T*)((uintptr_t)this + 0x1C);
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

	template <typename T = int32_t> T get_MethodNameId() {
		return ((T (*)(MSDKBaseRet*))(Il2CppBase() + 0x46BC558))(this);
	}
	template <typename T = void> T set_MethodNameId(int32_t value) {
		return ((T (*)(MSDKBaseRet*, int32_t))(Il2CppBase() + 0x46BC560))(this, value);
	}
	template <typename T = int32_t> T get_RetCode() {
		return ((T (*)(MSDKBaseRet*))(Il2CppBase() + 0x46BC568))(this);
	}
	template <typename T = void> T set_RetCode(int32_t value) {
		return ((T (*)(MSDKBaseRet*, int32_t))(Il2CppBase() + 0x46BC570))(this, value);
	}
	template <typename T = Il2CppString*> T get_RetMsg() {
		return ((T (*)(MSDKBaseRet*))(Il2CppBase() + 0x46BC578))(this);
	}
	template <typename T = void> T set_RetMsg(Il2CppString* value) {
		return ((T (*)(MSDKBaseRet*, Il2CppString*))(Il2CppBase() + 0x46BC580))(this, value);
	}
	template <typename T = int32_t> T get_ThirdCode() {
		return ((T (*)(MSDKBaseRet*))(Il2CppBase() + 0x46BC588))(this);
	}
	template <typename T = void> T set_ThirdCode(int32_t value) {
		return ((T (*)(MSDKBaseRet*, int32_t))(Il2CppBase() + 0x46BC590))(this, value);
	}
	template <typename T = Il2CppString*> T get_ThirdMsg() {
		return ((T (*)(MSDKBaseRet*))(Il2CppBase() + 0x46BC598))(this);
	}
	template <typename T = void> T set_ThirdMsg(Il2CppString* value) {
		return ((T (*)(MSDKBaseRet*, Il2CppString*))(Il2CppBase() + 0x46BC5A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtraJson() {
		return ((T (*)(MSDKBaseRet*))(Il2CppBase() + 0x46BC5A8))(this);
	}
	template <typename T = void> T set_ExtraJson(Il2CppString* value) {
		return ((T (*)(MSDKBaseRet*, Il2CppString*))(Il2CppBase() + 0x46BC5B0))(this, value);
	}

};

}
