#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRVehicleSkinConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRVehicleSkinConfConfig"));
	}

	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& VehicleId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& LOCID_HowToGet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& GoGetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& GoGetUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& ShowRare() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SkinStyle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SkinParam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& SkinParam2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& ModelRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& ShowInBag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& LockedShowOrder() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsAutoDemolition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& CurrencyID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x50);
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
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5683C))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D568DC))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, uint32_t))(Il2CppBase() + 0x2D568E4))(this, value);
	}
	template <typename T = int32_t> T get_VehicleId() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D568EC))(this);
	}
	template <typename T = void> T set_VehicleId(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D568F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D568FC))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(BRVehicleSkinConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D56904))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5690C))(this);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5691C))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D56924))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5692C))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(BRVehicleSkinConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D56934))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5693C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_HowToGet() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5694C))(this);
	}
	template <typename T = void> T set_LOCID_HowToGet(Il2CppString* value) {
		return ((T (*)(BRVehicleSkinConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D56954))(this, value);
	}
	template <typename T = Il2CppString*> T get_HowToGet() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5695C))(this);
	}
	template <typename T = int32_t> T get_GoGetPos() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5696C))(this);
	}
	template <typename T = void> T set_GoGetPos(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D56974))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoGetUrl() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5697C))(this);
	}
	template <typename T = void> T set_GoGetUrl(Il2CppString* value) {
		return ((T (*)(BRVehicleSkinConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D56984))(this, value);
	}
	template <typename T = bool> T get_ShowRare() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5698C))(this);
	}
	template <typename T = void> T set_ShowRare(bool value) {
		return ((T (*)(BRVehicleSkinConfConfig*, bool))(Il2CppBase() + 0x2D56994))(this, value);
	}
	template <typename T = int32_t> T get_SkinStyle() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D5699C))(this);
	}
	template <typename T = void> T set_SkinStyle(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D569A4))(this, value);
	}
	template <typename T = int32_t> T get_SkinParam() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D569AC))(this);
	}
	template <typename T = void> T set_SkinParam(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D569B4))(this, value);
	}
	template <typename T = int32_t> T get_SkinParam2() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D569BC))(this);
	}
	template <typename T = void> T set_SkinParam2(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D569C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModelRotation() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D569CC))(this);
	}
	template <typename T = void> T set_ModelRotation(Il2CppString* value) {
		return ((T (*)(BRVehicleSkinConfConfig*, Il2CppString*))(Il2CppBase() + 0x2D569D4))(this, value);
	}
	template <typename T = bool> T get_ShowInBag() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D569DC))(this);
	}
	template <typename T = void> T set_ShowInBag(bool value) {
		return ((T (*)(BRVehicleSkinConfConfig*, bool))(Il2CppBase() + 0x2D569E4))(this, value);
	}
	template <typename T = int32_t> T get_LockedShowOrder() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D569EC))(this);
	}
	template <typename T = void> T set_LockedShowOrder(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D569F4))(this, value);
	}
	template <typename T = bool> T get_IsAutoDemolition() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D569FC))(this);
	}
	template <typename T = void> T set_IsAutoDemolition(bool value) {
		return ((T (*)(BRVehicleSkinConfConfig*, bool))(Il2CppBase() + 0x2D56A04))(this, value);
	}
	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D56A0C))(this);
	}
	template <typename T = void> T set_CurrencyID(uint32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, uint32_t))(Il2CppBase() + 0x2D56A14))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(BRVehicleSkinConfConfig*))(Il2CppBase() + 0x2D56A1C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(BRVehicleSkinConfConfig*, int32_t))(Il2CppBase() + 0x2D56A24))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRVehicleSkinConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D56A2C))(this, bytes, position);
	}

};

}
