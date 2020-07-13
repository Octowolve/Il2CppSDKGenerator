#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpecialItemConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpecialItemConfConfig"));
	}

	template <typename T = Il2CppString*> T& LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ColorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ColorSubID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SellPrice() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MinSPI() {
		return *(T*)((uintptr_t)this + 0x24);
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

	template <typename T = uint32_t> T get_CurrencyID() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5640))(this);
	}
	template <typename T = int32_t> T get_SellProtection() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5648))(this);
	}
	template <typename T = uint32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5650))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E56F8))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(SpecialItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E5700))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5708))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5718))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(SpecialItemConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E5720))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5728))(this);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E56F0))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(SpecialItemConfConfig*, uint32_t))(Il2CppBase() + 0x30E5738))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5740))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(SpecialItemConfConfig*, int32_t))(Il2CppBase() + 0x30E5748))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5750))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(SpecialItemConfConfig*, int32_t))(Il2CppBase() + 0x30E5758))(this, value);
	}
	template <typename T = int32_t> T get_SellPrice() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5760))(this);
	}
	template <typename T = void> T set_SellPrice(int32_t value) {
		return ((T (*)(SpecialItemConfConfig*, int32_t))(Il2CppBase() + 0x30E5768))(this, value);
	}
	template <typename T = int32_t> T get_MinSPI() {
		return ((T (*)(SpecialItemConfConfig*))(Il2CppBase() + 0x30E5770))(this);
	}
	template <typename T = void> T set_MinSPI(int32_t value) {
		return ((T (*)(SpecialItemConfConfig*, int32_t))(Il2CppBase() + 0x30E5778))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpecialItemConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E5780))(this, bytes, position);
	}

};

}
