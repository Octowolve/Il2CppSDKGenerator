#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BagWeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BagWeaponInfo"));
	}

	template <typename T = uintptr_t> T& mesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& meshID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& socketName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& socketTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& itemLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& skinID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mainTexture() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& posOffset_L() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& angleOffset_L() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& posOffset_R() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& angleOffset_R() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isLeftWeapon() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& attachmentList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& meshRenderList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& lodRenderList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& optimizedModel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<void*>*> T& composePartAssets() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unuseAttachmentNames() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangedWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T ChangedWeaponInfo(uintptr_t dstBagWeaponInfo, uintptr_t br3PAvataBagWeaponSocketCache) {
		return ((T (*)(BagWeaponInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x24D90B8))(this, dstBagWeaponInfo, br3PAvataBagWeaponSocketCache);
	}

};

}
