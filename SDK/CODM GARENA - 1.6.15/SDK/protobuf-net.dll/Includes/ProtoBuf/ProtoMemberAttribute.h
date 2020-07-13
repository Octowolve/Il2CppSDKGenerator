#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class ProtoMemberAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "ProtoMemberAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& dataFormat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(ProtoMemberAttribute*, uintptr_t))(Il2CppBase() + 0x50695C4))(this, other);
	}
	template <typename T = int32_t> T CompareTo_1(uintptr_t other) {
		return ((T (*)(ProtoMemberAttribute*, uintptr_t))(Il2CppBase() + 0x5069684))(this, other);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ProtoMemberAttribute*, Il2CppString*))(Il2CppBase() + 0x506984C))(this, value);
	}
	template <typename T = void> T set_DataFormat(uintptr_t value) {
		return ((T (*)(ProtoMemberAttribute*, uintptr_t))(Il2CppBase() + 0x5069854))(this, value);
	}
	template <typename T = void> T set_IsRequired(bool value) {
		return ((T (*)(ProtoMemberAttribute*, bool))(Il2CppBase() + 0x506985C))(this, value);
	}

};

}
