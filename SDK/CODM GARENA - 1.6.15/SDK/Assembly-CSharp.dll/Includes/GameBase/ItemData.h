#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ItemData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ItemData"));
	}

	template <typename T = uint64_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ResourceID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Priority() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_StrengthenType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_EquipPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsTradeable() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_SellingCurrencyType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_SellingPrice() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_CanBeDisassembled() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Quality() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& BeAwaken() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& MallName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uint64_t> T get_ItemID() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F196CC))(this);
	}
	template <typename T = void> T set_ItemID(uint64_t value) {
		return ((T (*)(ItemData*, uint64_t))(Il2CppBase() + 0x1F196D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F196E4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1F196EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorName() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F196F4))(this);
	}
	template <typename T = int32_t> T get_ResourceID() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1982C))(this);
	}
	template <typename T = void> T set_ResourceID(int32_t value) {
		return ((T (*)(ItemData*, int32_t))(Il2CppBase() + 0x1F19834))(this, value);
	}
	template <typename T = uintptr_t> T get_Priority() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1983C))(this);
	}
	template <typename T = void> T set_Priority(uintptr_t value) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1F19844))(this, value);
	}
	template <typename T = Il2CppString*> T get_StrengthenType() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1984C))(this);
	}
	template <typename T = void> T set_StrengthenType(Il2CppString* value) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1F19854))(this, value);
	}
	template <typename T = int32_t> T get_EquipPosition() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1985C))(this);
	}
	template <typename T = void> T set_EquipPosition(int32_t value) {
		return ((T (*)(ItemData*, int32_t))(Il2CppBase() + 0x1F19864))(this, value);
	}
	template <typename T = bool> T get_IsTradeable() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1986C))(this);
	}
	template <typename T = void> T set_IsTradeable(bool value) {
		return ((T (*)(ItemData*, bool))(Il2CppBase() + 0x1F19874))(this, value);
	}
	template <typename T = uintptr_t> T get_SellingCurrencyType() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1987C))(this);
	}
	template <typename T = void> T set_SellingCurrencyType(uintptr_t value) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1F19884))(this, value);
	}
	template <typename T = int32_t> T get_SellingPrice() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1988C))(this);
	}
	template <typename T = void> T set_SellingPrice(int32_t value) {
		return ((T (*)(ItemData*, int32_t))(Il2CppBase() + 0x1F19894))(this, value);
	}
	template <typename T = bool> T get_CanBeDisassembled() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F1989C))(this);
	}
	template <typename T = void> T set_CanBeDisassembled(bool value) {
		return ((T (*)(ItemData*, bool))(Il2CppBase() + 0x1F198A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F198AC))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1F198B4))(this, value);
	}
	template <typename T = uintptr_t> T get_Quality() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F198BC))(this);
	}
	template <typename T = void> T set_Quality(uintptr_t value) {
		return ((T (*)(ItemData*, uintptr_t))(Il2CppBase() + 0x1F198C4))(this, value);
	}
	template <typename T = bool> T get_BeAwaken() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F198CC))(this);
	}
	template <typename T = void> T set_BeAwaken(bool value) {
		return ((T (*)(ItemData*, bool))(Il2CppBase() + 0x1F198D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_MallName() {
		return ((T (*)(ItemData*))(Il2CppBase() + 0x1F198DC))(this);
	}
	template <typename T = void> T set_MallName(Il2CppString* value) {
		return ((T (*)(ItemData*, Il2CppString*))(Il2CppBase() + 0x1F198E4))(this, value);
	}
	template <typename T = bool> T Init(int32_t InResourceID) {
		return ((T (*)(ItemData*, int32_t))(Il2CppBase() + 0x1F198EC))(this, InResourceID);
	}

};

}
