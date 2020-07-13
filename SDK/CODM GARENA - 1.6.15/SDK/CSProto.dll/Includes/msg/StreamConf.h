#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class StreamConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "StreamConf"));
	}

	template <typename T = uint32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StreamLink() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _StartTimestamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _ShowReddot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowReddotStartTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowReddotEndTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _ShowReddotStartTimestamp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _ShowReddotEndTimestamp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _RegionId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uint32_t> T get_Id() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A20))(this);
	}
	template <typename T = void> T set_Id(uint32_t value) {
		return ((T (*)(StreamConf*, uint32_t))(Il2CppBase() + 0x51A9A28))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StreamLink() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A30))(this);
	}
	template <typename T = void> T set_StreamLink(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StreamConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9A38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_StartTime() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A40))(this);
	}
	template <typename T = void> T set_StartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StreamConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9A48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EndTime() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A50))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StreamConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9A58))(this, value);
	}
	template <typename T = uint32_t> T get_StartTimestamp() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A60))(this);
	}
	template <typename T = void> T set_StartTimestamp(uint32_t value) {
		return ((T (*)(StreamConf*, uint32_t))(Il2CppBase() + 0x51A9A68))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A70))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(StreamConf*, uint32_t))(Il2CppBase() + 0x51A9A78))(this, value);
	}
	template <typename T = int32_t> T get_ShowReddot() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A80))(this);
	}
	template <typename T = void> T set_ShowReddot(int32_t value) {
		return ((T (*)(StreamConf*, int32_t))(Il2CppBase() + 0x51A9A88))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowReddotStartTime() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9A90))(this);
	}
	template <typename T = void> T set_ShowReddotStartTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StreamConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9A98))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowReddotEndTime() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9AA0))(this);
	}
	template <typename T = void> T set_ShowReddotEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(StreamConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A9AA8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowReddotStartTimestamp() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9AB0))(this);
	}
	template <typename T = void> T set_ShowReddotStartTimestamp(uint32_t value) {
		return ((T (*)(StreamConf*, uint32_t))(Il2CppBase() + 0x51A9AB8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowReddotEndTimestamp() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9AC0))(this);
	}
	template <typename T = void> T set_ShowReddotEndTimestamp(uint32_t value) {
		return ((T (*)(StreamConf*, uint32_t))(Il2CppBase() + 0x51A9AC8))(this, value);
	}
	template <typename T = uint32_t> T get_RegionId() {
		return ((T (*)(StreamConf*))(Il2CppBase() + 0x51A9AD0))(this);
	}
	template <typename T = void> T set_RegionId(uint32_t value) {
		return ((T (*)(StreamConf*, uint32_t))(Il2CppBase() + 0x51A9AD8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(StreamConf*, bool))(Il2CppBase() + 0x51A9AE0))(this, createIfMissing);
	}

};

}
