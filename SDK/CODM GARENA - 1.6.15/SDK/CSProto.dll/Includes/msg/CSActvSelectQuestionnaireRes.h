#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvSelectQuestionnaireRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvSelectQuestionnaireRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _actv_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _actv_state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvSelectQuestionnaireRes*))(Il2CppBase() + 0x51E3CC4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvSelectQuestionnaireRes*, int32_t))(Il2CppBase() + 0x51E3CCC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_actv_info() {
		return ((T (*)(CSActvSelectQuestionnaireRes*))(Il2CppBase() + 0x51E3CD4))(this);
	}
	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvSelectQuestionnaireRes*))(Il2CppBase() + 0x51E3CDC))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvSelectQuestionnaireRes*, uint64_t))(Il2CppBase() + 0x51E3CE4))(this, value);
	}
	template <typename T = int32_t> T get_actv_state() {
		return ((T (*)(CSActvSelectQuestionnaireRes*))(Il2CppBase() + 0x51E3CF4))(this);
	}
	template <typename T = void> T set_actv_state(int32_t value) {
		return ((T (*)(CSActvSelectQuestionnaireRes*, int32_t))(Il2CppBase() + 0x51E3CFC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvSelectQuestionnaireRes*, bool))(Il2CppBase() + 0x51E3D04))(this, createIfMissing);
	}

};

}
