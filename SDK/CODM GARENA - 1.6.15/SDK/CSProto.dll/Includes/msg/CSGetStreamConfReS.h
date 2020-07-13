#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetStreamConfReS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetStreamConfReS"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _confs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _stream_timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetStreamConfReS*))(Il2CppBase() + 0x5218510))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetStreamConfReS*, int32_t))(Il2CppBase() + 0x5218518))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_confs() {
		return ((T (*)(CSGetStreamConfReS*))(Il2CppBase() + 0x5218520))(this);
	}
	template <typename T = uint32_t> T get_stream_timestamp() {
		return ((T (*)(CSGetStreamConfReS*))(Il2CppBase() + 0x5218528))(this);
	}
	template <typename T = void> T set_stream_timestamp(uint32_t value) {
		return ((T (*)(CSGetStreamConfReS*, uint32_t))(Il2CppBase() + 0x5218530))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetStreamConfReS*, bool))(Il2CppBase() + 0x5218538))(this, createIfMissing);
	}

};

}
