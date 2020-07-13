#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Current
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Current"));
	}

	template <typename T = Il2CppString*> static T& SVN_REVISION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SIGN_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& SHIPPING_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& TVERSION_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& ENABLE_IL2CPP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& DEV_BUILD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11);
	}
	template <typename T = bool> static T& ASSETBUNDLE_BUILD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12);
	}
	template <typename T = uintptr_t> static T& PACKAGE_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& BundleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& PRODUCT_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& PRODUCT_FULL_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& UseOBB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> static T& UseOBBAssetBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x25);
	}
	template <typename T = Il2CppString*> static T& PROGRAM_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& RES_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& VERSION_CODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& BUILD_NUMBER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& SDK_MODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& RUNTIME_DYNAMIC_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppString*> static T& MatchProtocolMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = bool> static T& SupportLitePack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = bool> static T& LitePackDevDaily() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x49);
	}
	template <typename T = bool> static T& SupportPufferWithDolphin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A);
	}
	template <typename T = bool> static T& PreviewForGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B);
	}
	template <typename T = int32_t> static T& GCloudAppID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> static T& GCloudAppSecret() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = int32_t> static T& GCloudDolphinChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppString*> static T& GCloudDolphinUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}


};

}
