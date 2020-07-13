#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class BaseTransition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "BaseTransition"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& additionalSourceCameras() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& additionalDestinationCameras() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& sourceCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& destinationCamera() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& renderMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& introRenderTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& outroRenderTexture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& shouldRender() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& prevIntroCameraState() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& prevOutroCameraState() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = float> T& ratio() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_IntroRenderTexture() {
		return ((T (*)(BaseTransition*))(Il2CppBase() + 0x5220534))(this);
	}
	template <typename T = uintptr_t> T get_OutroRenderTexture() {
		return ((T (*)(BaseTransition*))(Il2CppBase() + 0x522084C))(this);
	}
	template <typename T = void> T InitializeTransition(uintptr_t sourceCamera, uintptr_t destinationCamera, Il2CppList<uintptr_t>* additionalSourceCameras, Il2CppList<uintptr_t>* additionalDestinationCameras, uintptr_t transitionType) {
		return ((T (*)(BaseTransition*, uintptr_t, uintptr_t, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5220980))(this, sourceCamera, destinationCamera, additionalSourceCameras, additionalDestinationCameras, transitionType);
	}
	template <typename T = void> T ProcessTransitionFromOnGUI() {
		return ((T (*)(BaseTransition*))(Il2CppBase() + 0x5220E38))(this);
	}
	template <typename T = void> T ProcessEventFromNoneOnGUI(float deltaTime, float duration) {
		return ((T (*)(BaseTransition*, float, float))(Il2CppBase() + 0x5220F84))(this, deltaTime, duration);
	}
	template <typename T = void> T TransitionComplete() {
		return ((T (*)(BaseTransition*))(Il2CppBase() + 0x5221294))(this);
	}
	template <typename T = void> T RevertTransition() {
		return ((T (*)(BaseTransition*))(Il2CppBase() + 0x522177C))(this);
	}

};

}
