#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class VideoModuleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "VideoModuleData"));
	}

	template <typename T = Il2CppString*> T& VideoModuleName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Videos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(VideoModuleData*, uintptr_t))(Il2CppBase() + 0x2E8F488))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(VideoModuleData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2E8F704))(this, bytes, position);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VideoModuleData*))(Il2CppBase() + 0x2E8FA88))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(VideoModuleData*))(Il2CppBase() + 0x2E8FBEC))(this);
	}

};

}
