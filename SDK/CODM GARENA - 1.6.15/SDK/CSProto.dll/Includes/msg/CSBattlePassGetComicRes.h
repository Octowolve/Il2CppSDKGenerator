#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetComicRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetComicRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _comic_res_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _total_page() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBattlePassGetComicRes*))(Il2CppBase() + 0x51E51A4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBattlePassGetComicRes*, int32_t))(Il2CppBase() + 0x51E51AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_comic_res_list() {
		return ((T (*)(CSBattlePassGetComicRes*))(Il2CppBase() + 0x51E51B4))(this);
	}
	template <typename T = int32_t> T get_total_page() {
		return ((T (*)(CSBattlePassGetComicRes*))(Il2CppBase() + 0x51E51BC))(this);
	}
	template <typename T = void> T set_total_page(int32_t value) {
		return ((T (*)(CSBattlePassGetComicRes*, int32_t))(Il2CppBase() + 0x51E51C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetComicRes*, bool))(Il2CppBase() + 0x51E51CC))(this, createIfMissing);
	}

};

}
