#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameShopConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameShopConfig"));
	}

	template <typename T = uint32_t> T& _ShopID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _ShopType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _ShopColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _ItemID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _ItemNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _ActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _ActiveEndTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _Price() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _Desc() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _EnableAbtest() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uint32_t> T get_ShopID() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCDE0))(this);
	}
	template <typename T = void> T set_ShopID(uint32_t value) {
		return ((T (*)(GameShopConfig*, uint32_t))(Il2CppBase() + 0x50CCDE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Name() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCDF0))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppString* value) {
		return ((T (*)(GameShopConfig*, Il2CppString*))(Il2CppBase() + 0x50CCDF8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE00))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(GameShopConfig*, Il2CppString*))(Il2CppBase() + 0x50CCE08))(this, value);
	}
	template <typename T = int32_t> T get_ShopType() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE10))(this);
	}
	template <typename T = void> T set_ShopType(int32_t value) {
		return ((T (*)(GameShopConfig*, int32_t))(Il2CppBase() + 0x50CCE18))(this, value);
	}
	template <typename T = int32_t> T get_ShopColor() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE20))(this);
	}
	template <typename T = void> T set_ShopColor(int32_t value) {
		return ((T (*)(GameShopConfig*, int32_t))(Il2CppBase() + 0x50CCE28))(this, value);
	}
	template <typename T = uint32_t> T get_ItemID() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE30))(this);
	}
	template <typename T = void> T set_ItemID(uint32_t value) {
		return ((T (*)(GameShopConfig*, uint32_t))(Il2CppBase() + 0x50CCE38))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE40))(this);
	}
	template <typename T = void> T set_ItemNum(int32_t value) {
		return ((T (*)(GameShopConfig*, int32_t))(Il2CppBase() + 0x50CCE48))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE50))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(GameShopConfig*, int32_t))(Il2CppBase() + 0x50CCE58))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveBeginTime() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE60))(this);
	}
	template <typename T = void> T set_ActiveBeginTime(Il2CppString* value) {
		return ((T (*)(GameShopConfig*, Il2CppString*))(Il2CppBase() + 0x50CCE68))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveEndTime() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE70))(this);
	}
	template <typename T = void> T set_ActiveEndTime(Il2CppString* value) {
		return ((T (*)(GameShopConfig*, Il2CppString*))(Il2CppBase() + 0x50CCE78))(this, value);
	}
	template <typename T = uint32_t> T get_StartTime() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE80))(this);
	}
	template <typename T = void> T set_StartTime(uint32_t value) {
		return ((T (*)(GameShopConfig*, uint32_t))(Il2CppBase() + 0x50CCE88))(this, value);
	}
	template <typename T = uint32_t> T get_EndTime() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCE90))(this);
	}
	template <typename T = void> T set_EndTime(uint32_t value) {
		return ((T (*)(GameShopConfig*, uint32_t))(Il2CppBase() + 0x50CCE98))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCEA0))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(GameShopConfig*, int32_t))(Il2CppBase() + 0x50CCEA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCEB0))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(GameShopConfig*, Il2CppString*))(Il2CppBase() + 0x50CCEB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCEC0))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(GameShopConfig*, Il2CppString*))(Il2CppBase() + 0x50CCEC8))(this, value);
	}
	template <typename T = int32_t> T get_EnableAbtest() {
		return ((T (*)(GameShopConfig*))(Il2CppBase() + 0x50CCED0))(this);
	}
	template <typename T = void> T set_EnableAbtest(int32_t value) {
		return ((T (*)(GameShopConfig*, int32_t))(Il2CppBase() + 0x50CCED8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameShopConfig*, bool))(Il2CppBase() + 0x50CCEE0))(this, createIfMissing);
	}

};

}
