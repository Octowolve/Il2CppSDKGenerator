#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetSeasonInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetSeasonInfoRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _br_season_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mp_season_info() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGspGetSeasonInfoRes*))(Il2CppBase() + 0x51DFD98))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGspGetSeasonInfoRes*, uint32_t))(Il2CppBase() + 0x51DFDA0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_br_season_info() {
		return ((T (*)(CSGspGetSeasonInfoRes*))(Il2CppBase() + 0x51DFDA8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mp_season_info() {
		return ((T (*)(CSGspGetSeasonInfoRes*))(Il2CppBase() + 0x51DFDB0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetSeasonInfoRes*, bool))(Il2CppBase() + 0x51DFDB8))(this, createIfMissing);
	}

};

}
