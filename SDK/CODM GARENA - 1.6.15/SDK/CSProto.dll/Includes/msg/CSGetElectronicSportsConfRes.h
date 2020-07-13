#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetElectronicSportsConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetElectronicSportsConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rpt_elcspt_confs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetElectronicSportsConfRes*))(Il2CppBase() + 0x5216048))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetElectronicSportsConfRes*, int32_t))(Il2CppBase() + 0x5216050))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_rpt_elcspt_confs() {
		return ((T (*)(CSGetElectronicSportsConfRes*))(Il2CppBase() + 0x5216058))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetElectronicSportsConfRes*, bool))(Il2CppBase() + 0x5216060))(this, createIfMissing);
	}

};

}
