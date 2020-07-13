#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipState"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& MeshNames() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MaterialNames() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MeshObjs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& appendObjs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Meshs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mChangeBone() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mChangeMats() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& mEnable() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& mShow() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = int32_t> T& mEquipID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAppendObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAppendObjs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MeshShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeDetailTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMatsEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeMatsEx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckMatName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__changeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeMats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_enable() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FD4E4))(this);
	}
	template <typename T = bool> T get_isGUPSink() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FD4EC))(this);
	}
	template <typename T = bool> T get_ChangeBone() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FD4F4))(this);
	}
	template <typename T = void> T set_ChangeBone(bool value) {
		return ((T (*)(EquipState*, bool))(Il2CppBase() + 0x35FD4FC))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FD66C))(this);
	}
	template <typename T = int32_t> T get_EquipID() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FD674))(this);
	}
	template <typename T = void> T set_EquipID(int32_t value) {
		return ((T (*)(EquipState*, int32_t))(Il2CppBase() + 0x35FD67C))(this, value);
	}
	template <typename T = void> T ResetMaterial() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FD778))(this);
	}
	template <typename T = void> T ShowAppendObjs(bool inEnable) {
		return ((T (*)(EquipState*, bool))(Il2CppBase() + 0x35FD9F8))(this, inEnable);
	}
	template <typename T = void> T DestroyAppendObjs() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FDB68))(this);
	}
	template <typename T = bool> T MeshShow(Il2CppArray<uintptr_t>* renderers, bool inEnable) {
		return ((T (*)(EquipState*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x35FDD9C))(this, renderers, inEnable);
	}
	template <typename T = bool> T get_Show() {
		return ((T (*)(EquipState*))(Il2CppBase() + 0x35FDDA4))(this);
	}
	template <typename T = void> T set_Show(bool value) {
		return ((T (*)(EquipState*, bool))(Il2CppBase() + 0x35FDDAC))(this, value);
	}
	template <typename T = bool> T SetShow(bool inShow, uintptr_t inPawn) {
		return ((T (*)(EquipState*, bool, uintptr_t))(Il2CppBase() + 0x35FDDE0))(this, inShow, inPawn);
	}
	template <typename T = void> T ChangeDetailTexture(uintptr_t inTex) {
		return ((T (*)(EquipState*, uintptr_t))(Il2CppBase() + 0x35FDDE8))(this, inTex);
	}
	template <typename T = void> T ChangeMats(Il2CppArray<uintptr_t>* inMats, uintptr_t inPawn) {
		return ((T (*)(EquipState*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FDDF0))(this, inMats, inPawn);
	}
	template <typename T = void> T ChangeMatsEx(Il2CppArray<uintptr_t>* inMatIDs, uintptr_t inPawn) {
		return ((T (*)(EquipState*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FDDF8))(this, inMatIDs, inPawn);
	}
	template <typename T = void> T ChangeMatsEx_1(Il2CppArray<uintptr_t>* inMats, Il2CppArray<uintptr_t>* inMatIDs, uintptr_t inPawn) {
		return ((T (*)(EquipState*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FE020))(this, inMats, inMatIDs, inPawn);
	}
	template <typename T = bool> T CheckMatName(Il2CppString* inSrcName, int32_t inDistID) {
		return ((T (*)(EquipState*, Il2CppString*, int32_t))(Il2CppBase() + 0x35FE344))(this, inSrcName, inDistID);
	}
	template <typename T = void> T _changeMats(uintptr_t inObj, Il2CppArray<uintptr_t>* inMats) {
		return ((T (*)(EquipState*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x35FE8D4))(this, inObj, inMats);
	}
	template <typename T = void> T ChangeMaterial(uintptr_t renderer, Il2CppArray<uintptr_t>* mats, uintptr_t tempArray) {
		return ((T (*)(EquipState*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FE8DC))(this, renderer, mats, tempArray);
	}
	template <typename T = void> T ChangeMats_1(Il2CppArray<uintptr_t>* inMatIDs, uintptr_t inPawn) {
		return ((T (*)(EquipState*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35FE8F8))(this, inMatIDs, inPawn);
	}
	template <typename T = uintptr_t> T get_Item(int32_t idx) {
		return ((T (*)(EquipState*, int32_t))(Il2CppBase() + 0x35FE944))(this, idx);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Item_1(uint32_t idx) {
		return ((T (*)(EquipState*, uint32_t))(Il2CppBase() + 0x35FEA48))(this, idx);
	}
	template <typename T = Il2CppString*> T get_Item_2(uint16_t idx) {
		return ((T (*)(EquipState*, uint16_t))(Il2CppBase() + 0x35FEB48))(this, idx);
	}

};

}
