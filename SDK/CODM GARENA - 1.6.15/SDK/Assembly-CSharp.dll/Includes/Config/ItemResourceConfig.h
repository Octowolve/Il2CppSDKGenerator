#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ItemResourceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ItemResourceConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SpriteScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SmallSpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SquareSpriteName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& MiniSpriteName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& AvatarModelID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ModelAssetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& InventoryModelID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& MallAdvertising() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& FxAssetID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& ItemDesc() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& IsShowType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& VideoPath() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& SmallVideoPath() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& VideoIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& VideoDesc() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& BPSprite() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemAssetID_Model() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemAssetID_FemaleModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemAssetID_FX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T GetItemSpriteName(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376B340))(0, id);
	}
	template <typename T = int32_t> static T GetItemAssetID_Model(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376B44C))(0, ID);
	}
	template <typename T = int32_t> static T GetItemAssetID_FemaleModel(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376B560))(0, ID);
	}
	template <typename T = int32_t> static T GetItemAssetID_FX(int32_t ID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x376B674))(0, ID);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B788))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B828))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ItemResourceConfig*, int32_t))(Il2CppBase() + 0x376B830))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x37642B4))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B838))(this, value);
	}
	template <typename T = float> T get_SpriteScale() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B840))(this);
	}
	template <typename T = void> T set_SpriteScale(float value) {
		return ((T (*)(ItemResourceConfig*, float))(Il2CppBase() + 0x376B848))(this, value);
	}
	template <typename T = Il2CppString*> T get_SmallSpriteName() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B850))(this);
	}
	template <typename T = void> T set_SmallSpriteName(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B858))(this, value);
	}
	template <typename T = Il2CppString*> T get_SquareSpriteName() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B860))(this);
	}
	template <typename T = void> T set_SquareSpriteName(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B868))(this, value);
	}
	template <typename T = Il2CppString*> T get_MiniSpriteName() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B870))(this);
	}
	template <typename T = void> T set_MiniSpriteName(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B878))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B880))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B888))(this, value);
	}
	template <typename T = uint64_t> T get_AvatarModelID() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B890))(this);
	}
	template <typename T = void> T set_AvatarModelID(uint64_t value) {
		return ((T (*)(ItemResourceConfig*, uint64_t))(Il2CppBase() + 0x376B898))(this, value);
	}
	template <typename T = int32_t> T get_ModelAssetID() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B558))(this);
	}
	template <typename T = void> T set_ModelAssetID(int32_t value) {
		return ((T (*)(ItemResourceConfig*, int32_t))(Il2CppBase() + 0x376B8A8))(this, value);
	}
	template <typename T = int32_t> T get_InventoryModelID() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B66C))(this);
	}
	template <typename T = void> T set_InventoryModelID(int32_t value) {
		return ((T (*)(ItemResourceConfig*, int32_t))(Il2CppBase() + 0x376B8B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_MallAdvertising() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B8B8))(this);
	}
	template <typename T = void> T set_MallAdvertising(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B8C0))(this, value);
	}
	template <typename T = int32_t> T get_FxAssetID() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B780))(this);
	}
	template <typename T = void> T set_FxAssetID(int32_t value) {
		return ((T (*)(ItemResourceConfig*, int32_t))(Il2CppBase() + 0x376B8C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ItemDesc() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B8D0))(this);
	}
	template <typename T = void> T set_ItemDesc(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B8D8))(this, value);
	}
	template <typename T = int32_t> T get_IsShowType() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B8E0))(this);
	}
	template <typename T = void> T set_IsShowType(int32_t value) {
		return ((T (*)(ItemResourceConfig*, int32_t))(Il2CppBase() + 0x376B8E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_VideoPath() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B8F0))(this);
	}
	template <typename T = void> T set_VideoPath(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B8F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_SmallVideoPath() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B900))(this);
	}
	template <typename T = void> T set_SmallVideoPath(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B908))(this, value);
	}
	template <typename T = Il2CppString*> T get_VideoIcon() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B910))(this);
	}
	template <typename T = void> T set_VideoIcon(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B918))(this, value);
	}
	template <typename T = Il2CppString*> T get_VideoDesc() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B920))(this);
	}
	template <typename T = void> T set_VideoDesc(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B928))(this, value);
	}
	template <typename T = Il2CppString*> T get_BPSprite() {
		return ((T (*)(ItemResourceConfig*))(Il2CppBase() + 0x376B930))(this);
	}
	template <typename T = void> T set_BPSprite(Il2CppString* value) {
		return ((T (*)(ItemResourceConfig*, Il2CppString*))(Il2CppBase() + 0x376B938))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ItemResourceConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x376B940))(this, bytes, position);
	}

};

}
