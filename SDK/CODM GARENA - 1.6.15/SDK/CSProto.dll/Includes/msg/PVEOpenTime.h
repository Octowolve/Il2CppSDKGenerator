#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PVEOpenTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PVEOpenTime"));
	}

	template <typename T = uint32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _StartTimestamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _ShowCountdown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_Id() {
		return ((T (*)(PVEOpenTime*))(Il2CppBase() + 0x506F930))(this);
	}
	template <typename T = void> T set_Id(uint32_t value) {
		return ((T (*)(PVEOpenTime*, uint32_t))(Il2CppBase() + 0x506F938))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(PVEOpenTime*))(Il2CppBase() + 0x506F940))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PVEOpenTime*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506F948))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(PVEOpenTime*))(Il2CppBase() + 0x506F950))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PVEOpenTime*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x506F958))(this, value);
	}
	template <typename T = uint32_t> T get_StartTimestamp() {
		return ((T (*)(PVEOpenTime*))(Il2CppBase() + 0x506F960))(this);
	}
	template <typename T = void> T set_StartTimestamp(uint32_t value) {
		return ((T (*)(PVEOpenTime*, uint32_t))(Il2CppBase() + 0x506F968))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(PVEOpenTime*))(Il2CppBase() + 0x506F970))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(PVEOpenTime*, uint32_t))(Il2CppBase() + 0x506F978))(this, value);
	}
	template <typename T = int32_t> T get_ShowCountdown() {
		return ((T (*)(PVEOpenTime*))(Il2CppBase() + 0x506F980))(this);
	}
	template <typename T = void> T set_ShowCountdown(int32_t value) {
		return ((T (*)(PVEOpenTime*, int32_t))(Il2CppBase() + 0x506F988))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PVEOpenTime*, bool))(Il2CppBase() + 0x506F990))(this, createIfMissing);
	}

};

}
