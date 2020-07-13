#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TypeMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "TypeMetadata"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MemberTypes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MemberNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MemberInfos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FieldCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& NeedsSerializationInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
