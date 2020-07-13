#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTlogReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTlogReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _tlog() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _tlog_blob() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _tlog_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_tlog() {
		return ((T (*)(CSTlogReq*))(Il2CppBase() + 0x51B6380))(this);
	}
	template <typename T = void> T set_tlog(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSTlogReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B6388))(this, value);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_tlog_blob() {
		return ((T (*)(CSTlogReq*))(Il2CppBase() + 0x51B6390))(this);
	}
	template <typename T = int32_t> T get_tlog_id() {
		return ((T (*)(CSTlogReq*))(Il2CppBase() + 0x51B6398))(this);
	}
	template <typename T = void> T set_tlog_id(int32_t value) {
		return ((T (*)(CSTlogReq*, int32_t))(Il2CppBase() + 0x51B63A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTlogReq*, bool))(Il2CppBase() + 0x51B63A8))(this, createIfMissing);
	}

};

}
