#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ParticleAdaptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleAdaptor"));
	}

	template <typename T = bool> T& m_IsRecord() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_OriginalScaleList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& transformList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordOriginalScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ParticleAdaptor*))(Il2CppBase() + 0x3EFE740))(this);
	}
	template <typename T = void> T RecordOriginalScale() {
		return ((T (*)(ParticleAdaptor*))(Il2CppBase() + 0x3EFEAAC))(this);
	}

};

}
