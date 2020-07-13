#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class DOTweenSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "DOTweenSettings"));
	}

	template <typename T = Il2CppString*> static T& AssetName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& useSafeMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& timeScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& useSmoothDeltaTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& maxSmoothUnscaledTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& showUnityEditorReport() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& logBehaviour() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& drawGizmos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& defaultRecyclable() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& defaultAutoPlay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& defaultUpdateType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& defaultTimeScaleIndependent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& defaultEaseType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& defaultEaseOvershootOrAmplitude() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& defaultEasePeriod() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& defaultAutoKill() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& defaultLoopType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& storeSettingsLocation() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
