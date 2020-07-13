#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class RemoteProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "RemoteProperty"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isPublicRead() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isPublicWrite() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& canRead() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& canWrite() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& isEdited() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& changedValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
