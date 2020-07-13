#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryDesc"));
	}

	template <typename T = int32_t> T& _LotteryId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _Index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Rate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _LuckyRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _Gold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _Diamond() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _GamePoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _WeaponPoint() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _ExpertPoint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _AgingType1() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint64_t> T& _PropId1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _PropTime1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _PropNum1() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PropName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_LotteryId() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEE5C))(this);
	}
	template <typename T = void> T set_LotteryId(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEE64))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEE6C))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEE74))(this, value);
	}
	template <typename T = int32_t> T get_Rate() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEE7C))(this);
	}
	template <typename T = void> T set_Rate(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEE84))(this, value);
	}
	template <typename T = int32_t> T get_LuckyRate() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEE8C))(this);
	}
	template <typename T = void> T set_LuckyRate(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEE94))(this, value);
	}
	template <typename T = int32_t> T get_Gold() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEE9C))(this);
	}
	template <typename T = void> T set_Gold(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEEA4))(this, value);
	}
	template <typename T = int32_t> T get_Diamond() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEEAC))(this);
	}
	template <typename T = void> T set_Diamond(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEEB4))(this, value);
	}
	template <typename T = int32_t> T get_GamePoint() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEEBC))(this);
	}
	template <typename T = void> T set_GamePoint(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEEC4))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPoint() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEECC))(this);
	}
	template <typename T = void> T set_WeaponPoint(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEED4))(this, value);
	}
	template <typename T = int32_t> T get_ExpertPoint() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEEDC))(this);
	}
	template <typename T = void> T set_ExpertPoint(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEEE4))(this, value);
	}
	template <typename T = int32_t> T get_AgingType1() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEEEC))(this);
	}
	template <typename T = void> T set_AgingType1(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEEF4))(this, value);
	}
	template <typename T = uint64_t> T get_PropId1() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEEFC))(this);
	}
	template <typename T = void> T set_PropId1(uint64_t value) {
		return ((T (*)(CSLotteryDesc*, uint64_t))(Il2CppBase() + 0x51EEF04))(this, value);
	}
	template <typename T = int32_t> T get_PropTime1() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEF14))(this);
	}
	template <typename T = void> T set_PropTime1(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEF1C))(this, value);
	}
	template <typename T = int32_t> T get_PropNum1() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEF24))(this);
	}
	template <typename T = void> T set_PropNum1(int32_t value) {
		return ((T (*)(CSLotteryDesc*, int32_t))(Il2CppBase() + 0x51EEF2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PropName() {
		return ((T (*)(CSLotteryDesc*))(Il2CppBase() + 0x51EEF34))(this);
	}
	template <typename T = void> T set_PropName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLotteryDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51EEF3C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryDesc*, bool))(Il2CppBase() + 0x51EEF44))(this, createIfMissing);
	}

};

}
