#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttachmentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttachmentInfo"));
	}

	template <typename T = uint64_t> T& WeapID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SocketName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ShowSocket() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& HideSocket() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Trans() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ManagedAsset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& LoadTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& WeaponPartParent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsExtraAttachment() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
