#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomGetPVEOpenTimeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomGetPVEOpenTimeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_open_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomGetPVEOpenTimeRes*))(Il2CppBase() + 0x51DE8C0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomGetPVEOpenTimeRes*, int32_t))(Il2CppBase() + 0x51DE8C8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_open_time() {
		return ((T (*)(CSGroupRoomGetPVEOpenTimeRes*))(Il2CppBase() + 0x51DE8D0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomGetPVEOpenTimeRes*, bool))(Il2CppBase() + 0x51DE8D8))(this, createIfMissing);
	}

};

}
