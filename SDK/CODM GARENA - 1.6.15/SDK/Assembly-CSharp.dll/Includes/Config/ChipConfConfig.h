#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ChipConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ChipConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x30);
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

	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D10C))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D1AC))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(ChipConfConfig*, uint32_t))(Il2CppBase() + 0x2D5D1B4))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D1BC))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ChipConfConfig*, int32_t))(Il2CppBase() + 0x2D5D1C4))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D1CC))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(ChipConfConfig*, int32_t))(Il2CppBase() + 0x2D5D1D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D1DC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ChipConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5D1E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D1EC))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D1FC))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ChipConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D5D204))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D20C))(this);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D21C))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(ChipConfConfig*, int32_t))(Il2CppBase() + 0x2D5D224))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D22C))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(ChipConfConfig*, bool))(Il2CppBase() + 0x2D5D234))(this, value);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D23C))(this);
	}
	template <typename T = void> T set_SellProtection(int32_t value) {
		return ((T (*)(ChipConfConfig*, int32_t))(Il2CppBase() + 0x2D5D244))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D24C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(ChipConfConfig*, uint32_t))(Il2CppBase() + 0x2D5D254))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(ChipConfConfig*))(Il2CppBase() + 0x2D5D25C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(ChipConfConfig*, int32_t))(Il2CppBase() + 0x2D5D264))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ChipConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D5D26C))(this, bytes, position);
	}

};

}
