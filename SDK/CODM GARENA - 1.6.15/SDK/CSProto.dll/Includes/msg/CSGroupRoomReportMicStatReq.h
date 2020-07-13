#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomReportMicStatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomReportMicStatReq"));
	}

	template <typename T = uintptr_t> T& _report_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_report_info() {
		return ((T (*)(CSGroupRoomReportMicStatReq*))(Il2CppBase() + 0x51DF1A4))(this);
	}
	template <typename T = void> T set_report_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomReportMicStatReq*, uintptr_t))(Il2CppBase() + 0x51DF1AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomReportMicStatReq*, bool))(Il2CppBase() + 0x51DF1B4))(this, createIfMissing);
	}

};

}
