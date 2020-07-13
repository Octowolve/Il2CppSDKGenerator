#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ItemResData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ItemResData"));
	}

	template <typename T = int32_t> T& m_ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_SpriteName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& m_SmallSpriteName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SpriteScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ModelAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_InventoryModelAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_ModelLeftAssetID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_FemaleModelLeftAssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& MallAdvertisingName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& ItemDesc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_FxAssetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& RES_ID_OFFSET() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIdByResourceType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E140AC))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ItemResData*, int32_t))(Il2CppBase() + 0x2E140B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E140BC))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ItemResData*, Il2CppString*))(Il2CppBase() + 0x2E140C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_SmallSpriteName() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E140CC))(this);
	}
	template <typename T = void> T set_SmallSpriteName(Il2CppString* value) {
		return ((T (*)(ItemResData*, Il2CppString*))(Il2CppBase() + 0x2E140D4))(this, value);
	}
	template <typename T = float> T get_SpriteScale() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E140DC))(this);
	}
	template <typename T = void> T set_SpriteScale(float value) {
		return ((T (*)(ItemResData*, float))(Il2CppBase() + 0x2E140E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemName() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E140EC))(this);
	}
	template <typename T = void> T set_ItemName(Il2CppString* value) {
		return ((T (*)(ItemResData*, Il2CppString*))(Il2CppBase() + 0x2E140F4))(this, value);
	}
	template <typename T = int32_t> T get_ModelAssetID() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E140FC))(this);
	}
	template <typename T = void> T set_ModelAssetID(int32_t value) {
		return ((T (*)(ItemResData*, int32_t))(Il2CppBase() + 0x2E14104))(this, value);
	}
	template <typename T = int32_t> T get_InventoryModelAssetID() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1410C))(this);
	}
	template <typename T = void> T set_InventoryModelAssetID(int32_t value) {
		return ((T (*)(ItemResData*, int32_t))(Il2CppBase() + 0x2E14114))(this, value);
	}
	template <typename T = int32_t> T get_ModelLeftAssetID() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1411C))(this);
	}
	template <typename T = void> T set_ModelLeftAssetID(int32_t value) {
		return ((T (*)(ItemResData*, int32_t))(Il2CppBase() + 0x2E14124))(this, value);
	}
	template <typename T = int32_t> T get_FemaleModelLeftAssetID() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1412C))(this);
	}
	template <typename T = void> T set_FemaleModelLeftAssetID(int32_t value) {
		return ((T (*)(ItemResData*, int32_t))(Il2CppBase() + 0x2E14134))(this, value);
	}
	template <typename T = Il2CppString*> T get_MallAdvertisingName() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1413C))(this);
	}
	template <typename T = void> T set_MallAdvertisingName(Il2CppString* value) {
		return ((T (*)(ItemResData*, Il2CppString*))(Il2CppBase() + 0x2E14144))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemDesc() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1414C))(this);
	}
	template <typename T = void> T set_ItemDesc(Il2CppString* value) {
		return ((T (*)(ItemResData*, Il2CppString*))(Il2CppBase() + 0x2E14154))(this, value);
	}
	template <typename T = int32_t> T get_FxAssetID() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1415C))(this);
	}
	template <typename T = void> T set_FxAssetID(int32_t value) {
		return ((T (*)(ItemResData*, int32_t))(Il2CppBase() + 0x2E14164))(this, value);
	}
	template <typename T = uintptr_t> T get_ResourceType() {
		return ((T (*)(ItemResData*))(Il2CppBase() + 0x2E1416C))(this);
	}
	template <typename T = int32_t> static T GetIdByResourceType(int32_t resType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2E14228))(0, resType);
	}

};

}
