#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipAttachmentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipAttachmentData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAttachmentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCSVData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_AttachmentCsv() {
		return ((T (*)(EquipAttachmentData*))(Il2CppBase() + 0x4C57D24))(this);
	}
	template <typename T = void> T UpdateAttachmentData(uintptr_t data) {
		return ((T (*)(EquipAttachmentData*, uintptr_t))(Il2CppBase() + 0x4C57EA0))(this, data);
	}
	template <typename T = void> T UpdateCSVData() {
		return ((T (*)(EquipAttachmentData*))(Il2CppBase() + 0x4C57FA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCSVData() {
		return ((T (*)(EquipAttachmentData*))(Il2CppBase() + 0x4C58150))(this);
	}

};

}
