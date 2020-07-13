#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class PVPStorageLeftSide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "PVPStorageLeftSide"));
	}

	template <typename T = uintptr_t> T& FadeInTarget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Primary() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Secondary() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WeaponSelectShow() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& OpticSelectShow() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ReticleSelcetShow() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AttachmentSelectListShow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllEquipemntType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelcetTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIconName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetAllEquipemntType(uintptr_t type) {
		return ((T (*)(PVPStorageLeftSide*, uintptr_t))(Il2CppBase() + 0x4A31CB4))(this, type);
	}
	template <typename T = void> T SetSelcetTab(bool isPrimay) {
		return ((T (*)(PVPStorageLeftSide*, bool))(Il2CppBase() + 0x4A31DD8))(this, isPrimay);
	}
	template <typename T = Il2CppString*> T GetIconName(uint64_t id, Il2CppString* defaultName) {
		return ((T (*)(PVPStorageLeftSide*, uint64_t, Il2CppString*))(Il2CppBase() + 0x4A31EC8))(this, id, defaultName);
	}
	template <typename T = void> T FadeInView() {
		return ((T (*)(PVPStorageLeftSide*))(Il2CppBase() + 0x4A32048))(this);
	}

};

}
