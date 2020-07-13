#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BpComicRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BpComicRes"));
	}

	template <typename T = int32_t> T& _ComicId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _SeasonId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _SeasonSeq() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _UnlockTimeByStr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _UnlockTimeByInt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnUS_0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnCN_1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnTW_2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnFR_3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnIT_4() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnDE_5() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnBR_7() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnRU_8() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnTR_10() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnLA_11() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnID_12() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnTH_13() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnSA_14() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnSG_15() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnJP_16() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnKR_17() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CdnVN_18() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Cnd_url() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = int32_t> T get_ComicId() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DB9C))(this);
	}
	template <typename T = void> T set_ComicId(int32_t value) {
		return ((T (*)(BpComicRes*, int32_t))(Il2CppBase() + 0x510DBA4))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DBAC))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(BpComicRes*, int32_t))(Il2CppBase() + 0x510DBB4))(this, value);
	}
	template <typename T = int32_t> T get_SeasonSeq() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DBBC))(this);
	}
	template <typename T = void> T set_SeasonSeq(int32_t value) {
		return ((T (*)(BpComicRes*, int32_t))(Il2CppBase() + 0x510DBC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UnlockTimeByStr() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DBCC))(this);
	}
	template <typename T = void> T set_UnlockTimeByStr(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DBD4))(this, value);
	}
	template <typename T = uint64_t> T get_UnlockTimeByInt() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DBDC))(this);
	}
	template <typename T = void> T set_UnlockTimeByInt(uint64_t value) {
		return ((T (*)(BpComicRes*, uint64_t))(Il2CppBase() + 0x510DBE4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnUS_0() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DBF4))(this);
	}
	template <typename T = void> T set_CdnUS_0(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DBFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnCN_1() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC04))(this);
	}
	template <typename T = void> T set_CdnCN_1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC0C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnTW_2() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC14))(this);
	}
	template <typename T = void> T set_CdnTW_2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC1C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnFR_3() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC24))(this);
	}
	template <typename T = void> T set_CdnFR_3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC2C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnIT_4() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC34))(this);
	}
	template <typename T = void> T set_CdnIT_4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC3C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnDE_5() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC44))(this);
	}
	template <typename T = void> T set_CdnDE_5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC4C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnBR_7() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC54))(this);
	}
	template <typename T = void> T set_CdnBR_7(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnRU_8() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC64))(this);
	}
	template <typename T = void> T set_CdnRU_8(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC6C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnTR_10() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC74))(this);
	}
	template <typename T = void> T set_CdnTR_10(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC7C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnLA_11() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC84))(this);
	}
	template <typename T = void> T set_CdnLA_11(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC8C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnID_12() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DC94))(this);
	}
	template <typename T = void> T set_CdnID_12(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DC9C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnTH_13() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DCA4))(this);
	}
	template <typename T = void> T set_CdnTH_13(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DCAC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnSA_14() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DCB4))(this);
	}
	template <typename T = void> T set_CdnSA_14(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DCBC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnSG_15() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DCC4))(this);
	}
	template <typename T = void> T set_CdnSG_15(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DCCC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnJP_16() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DCD4))(this);
	}
	template <typename T = void> T set_CdnJP_16(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DCDC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnKR_17() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DCE4))(this);
	}
	template <typename T = void> T set_CdnKR_17(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DCEC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CdnVN_18() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DCF4))(this);
	}
	template <typename T = void> T set_CdnVN_18(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DCFC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Cnd_url() {
		return ((T (*)(BpComicRes*))(Il2CppBase() + 0x510DD04))(this);
	}
	template <typename T = void> T set_Cnd_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BpComicRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510DD0C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BpComicRes*, bool))(Il2CppBase() + 0x510DD14))(this, createIfMissing);
	}

};

}
