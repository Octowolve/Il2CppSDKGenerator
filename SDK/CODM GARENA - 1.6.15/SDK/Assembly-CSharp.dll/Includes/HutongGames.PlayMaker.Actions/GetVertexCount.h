#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetVertexCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetVertexCount"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetVertexCount*))(Il2CppBase() + 0x4F00FB4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetVertexCount*))(Il2CppBase() + 0x4F00FC8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetVertexCount*))(Il2CppBase() + 0x4F011B4))(this);
	}
	template <typename T = void> T DoGetVertexCount() {
		return ((T (*)(GetVertexCount*))(Il2CppBase() + 0x4F00FF4))(this);
	}

};

}
