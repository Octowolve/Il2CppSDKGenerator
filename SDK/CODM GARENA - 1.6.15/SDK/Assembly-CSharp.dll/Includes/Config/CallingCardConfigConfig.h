#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class CallingCardConfigConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "CallingCardConfigConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CardType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CardAssetID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& EffectAssetID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Sort() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& SecondTab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B278))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B318))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B320))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B328))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(CallingCardConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D5B330))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B338))(this);
	}
	template <typename T = int32_t> T get_CardType() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B348))(this);
	}
	template <typename T = void> T set_CardType(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B350))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B358))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(CallingCardConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D5B360))(this, value);
	}
	template <typename T = int32_t> T get_CardAssetID() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B368))(this);
	}
	template <typename T = void> T set_CardAssetID(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B370))(this, value);
	}
	template <typename T = int32_t> T get_EffectAssetID() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B378))(this);
	}
	template <typename T = void> T set_EffectAssetID(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B380))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B388))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(CallingCardConfigConfig*, Il2CppString*))(Il2CppBase() + 0x2D5B390))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B398))(this);
	}
	template <typename T = int32_t> T get_Color() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B3A8))(this);
	}
	template <typename T = void> T set_Color(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B3B0))(this, value);
	}
	template <typename T = int32_t> T get_Sort() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B3B8))(this);
	}
	template <typename T = void> T set_Sort(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B3C0))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B3C8))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(CallingCardConfigConfig*, bool))(Il2CppBase() + 0x2D5B3D0))(this, value);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B3D8))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B3E0))(this, value);
	}
	template <typename T = int32_t> T get_SecondTab() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B3E8))(this);
	}
	template <typename T = void> T set_SecondTab(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B3F0))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B3F8))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(CallingCardConfigConfig*, bool))(Il2CppBase() + 0x2D5B400))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B408))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(CallingCardConfigConfig*, uint32_t))(Il2CppBase() + 0x2D5B410))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B418))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B420))(this, value);
	}
	template <typename T = int32_t> T get_Flag() {
		return ((T (*)(CallingCardConfigConfig*))(Il2CppBase() + 0x2D5B428))(this);
	}
	template <typename T = void> T set_Flag(int32_t value) {
		return ((T (*)(CallingCardConfigConfig*, int32_t))(Il2CppBase() + 0x2D5B430))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(CallingCardConfigConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5B438))(this, bytes, position);
	}

};

}
