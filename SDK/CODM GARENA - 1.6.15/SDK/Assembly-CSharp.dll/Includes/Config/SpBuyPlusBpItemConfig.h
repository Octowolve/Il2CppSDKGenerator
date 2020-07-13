#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpBuyPlusBpItemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpBuyPlusBpItemConfig"));
	}

	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AreaID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ItemEnum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ItemId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ItemNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ItemTier() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpBuyPlusBpItemConfig*))(Il2CppBase() + 0x30E2D18))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpBuyPlusBpItemConfig*, int32_t))(Il2CppBase() + 0x30E2D20))(this, value);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(SpBuyPlusBpItemConfig*))(Il2CppBase() + 0x30E2D28))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(SpBuyPlusBpItemConfig*, int32_t))(Il2CppBase() + 0x30E2D30))(this, value);
	}
	template <typename T = int32_t> T get_ItemEnum() {
		return ((T (*)(SpBuyPlusBpItemConfig*))(Il2CppBase() + 0x30E2D38))(this);
	}
	template <typename T = void> T set_ItemEnum(int32_t value) {
		return ((T (*)(SpBuyPlusBpItemConfig*, int32_t))(Il2CppBase() + 0x30E2D40))(this, value);
	}
	template <typename T = int32_t> T get_ItemId() {
		return ((T (*)(SpBuyPlusBpItemConfig*))(Il2CppBase() + 0x30E2D48))(this);
	}
	template <typename T = void> T set_ItemId(int32_t value) {
		return ((T (*)(SpBuyPlusBpItemConfig*, int32_t))(Il2CppBase() + 0x30E2D50))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum() {
		return ((T (*)(SpBuyPlusBpItemConfig*))(Il2CppBase() + 0x30E2D58))(this);
	}
	template <typename T = void> T set_ItemNum(int32_t value) {
		return ((T (*)(SpBuyPlusBpItemConfig*, int32_t))(Il2CppBase() + 0x30E2D60))(this, value);
	}
	template <typename T = int32_t> T get_ItemTier() {
		return ((T (*)(SpBuyPlusBpItemConfig*))(Il2CppBase() + 0x30E2D68))(this);
	}
	template <typename T = void> T set_ItemTier(int32_t value) {
		return ((T (*)(SpBuyPlusBpItemConfig*, int32_t))(Il2CppBase() + 0x30E2D70))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpBuyPlusBpItemConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E2D78))(this, bytes, position);
	}

};

}
