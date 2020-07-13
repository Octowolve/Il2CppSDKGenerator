#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MissingMemberException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MissingMemberException"));
	}

	template <typename T = Il2CppString*> T& ClassName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& MemberName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Signature() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MissingMemberException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454E590))(this, info, context);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(MissingMemberException*))(Il2CppBase() + 0x454E394))(this);
	}

};

}
