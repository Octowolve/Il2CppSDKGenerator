#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConsumableItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConsumableItemConfConfig"));
	}

	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BuffIDs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& SellProtection() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& CanStack() {
		return *(T*)((uintptr_t)this + 0x25);
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
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B10C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B1B4))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(ConsumableItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x463B1BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B1C4))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B1D4))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(ConsumableItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x463B1DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B1E4))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B1AC))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ConsumableItemConfConfig*, int32_t))(Il2CppBase() + 0x463B1F4))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B1FC))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ConsumableItemConfConfig*, int32_t))(Il2CppBase() + 0x463B204))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BuffIDs() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B20C))(this);
	}
	template <typename T = void> T set_BuffIDs(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ConsumableItemConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x463B214))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B21C))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(ConsumableItemConfConfig*, int32_t))(Il2CppBase() + 0x463B224))(this, value);
	}
	template <typename T = bool> T get_SellProtection() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B22C))(this);
	}
	template <typename T = void> T set_SellProtection(bool value) {
		return ((T (*)(ConsumableItemConfConfig*, bool))(Il2CppBase() + 0x463B234))(this, value);
	}
	template <typename T = bool> T get_CanStack() {
		return ((T (*)(ConsumableItemConfConfig*))(Il2CppBase() + 0x463B23C))(this);
	}
	template <typename T = void> T set_CanStack(bool value) {
		return ((T (*)(ConsumableItemConfConfig*, bool))(Il2CppBase() + 0x463B244))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ConsumableItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x463B24C))(this, bytes, position);
	}

};

}
