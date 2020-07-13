#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BundleVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BundleVersion"));
	}

	template <typename T = Il2CppString*> T& SVN_REVISION() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SIGN_MODE() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& SHIPPING_MODE() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TVERSION_MODE() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ENABLE_IL2CPP() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& DEV_BUILD() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& ASSETBUNDLE_BUILD() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& PACKAGE_MODE() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& BundleID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PRODUCT_NAME() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& PRODUCT_FULL_NAME() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& UseOBB() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& UseOBBAssetBalance() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppString*> T& PROGRAM_VERSION() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& RES_VERSION() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& VERSION() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& VERSION_CODE() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& BUILD_NUMBER() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SDK_MODE() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& RUNTIME_DYNAMIC_TYPE() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& MatchProtocolMD5() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& SupportLitePack() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& LitePackDevDaily() {
		return *(T*)((uintptr_t)this + 0x51);
	}
	template <typename T = bool> T& SupportPufferWithDolphin() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = bool> T& PreviewForGarena() {
		return *(T*)((uintptr_t)this + 0x53);
	}
	template <typename T = int32_t> T& GCloudAppID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& GCloudAppSecret() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& GCloudDolphinChannel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& GCloudDolphinUrl() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
