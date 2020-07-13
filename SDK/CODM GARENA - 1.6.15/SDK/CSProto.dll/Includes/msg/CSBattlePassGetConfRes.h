#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetConfRes"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _timelimit_conf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _charge_conf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buy_plusitem_conf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bp_number_item() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_timelimit_conf() {
		return ((T (*)(CSBattlePassGetConfRes*))(Il2CppBase() + 0x51E5344))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_charge_conf() {
		return ((T (*)(CSBattlePassGetConfRes*))(Il2CppBase() + 0x51E534C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_buy_plusitem_conf() {
		return ((T (*)(CSBattlePassGetConfRes*))(Il2CppBase() + 0x51E5354))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bp_number_item() {
		return ((T (*)(CSBattlePassGetConfRes*))(Il2CppBase() + 0x51E535C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetConfRes*, bool))(Il2CppBase() + 0x51E5364))(this, createIfMissing);
	}

};

}
