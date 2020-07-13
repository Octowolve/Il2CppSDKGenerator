#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf {

class BclHelpers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf", "BclHelpers"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EpochOrigin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T WriteTimeSpan(uintptr_t timeSpan, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505AAD8))(0, timeSpan, dest);
	}
	template <typename T = void> static T WriteTimeSpanImpl(uintptr_t timeSpan, uintptr_t dest, uintptr_t kind) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x505AB90))(0, timeSpan, dest, kind);
	}
	template <typename T = uintptr_t> static T ReadTimeSpan(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x505C47C))(0, source);
	}
	template <typename T = uintptr_t> static T ReadDateTime(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x505CB68))(0, source);
	}
	template <typename T = void> static T WriteDateTime(uintptr_t value, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505CD90))(0, value, dest);
	}
	template <typename T = void> static T WriteDateTimeWithKind(uintptr_t value, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505D36C))(0, value, dest);
	}
	template <typename T = void> static T WriteDateTimeImpl(uintptr_t value, uintptr_t dest, bool includeKind) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x505CE54))(0, value, dest, includeKind);
	}
	template <typename T = int64_t> static T ReadTimeSpanTicks(uintptr_t source, uintptr_t* kind) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x505C64C))(0, source, kind);
	}
	template <typename T = uintptr_t> static T ReadDecimal(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x505E374))(0, reader);
	}
	template <typename T = void> static T WriteDecimal(uintptr_t value, uintptr_t writer) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505EAB0))(0, value, writer);
	}
	template <typename T = void> static T WriteGuid(uintptr_t value, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x505F228))(0, value, dest);
	}
	template <typename T = uintptr_t> static T ReadGuid(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x505F7CC))(0, source);
	}

};

}
