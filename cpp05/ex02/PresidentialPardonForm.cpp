#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
	:AForm("president", 25, 5), target("President")
{
	std::cout << "PresidentialPardonForm Default Constructor called.\n";
}
PresidentialPardonForm::PresidentialPardonForm(const std::string t)
	:AForm("president", 25, 5), target(t)
{
	std::cout << "PresidentialPardonForm Parametrized Constructor called.\n";
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm Destructor called.\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	:AForm(obj)
{
	std::cout << "PresidentialPardonForm copy constructor.\n";
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	this->target = obj.target;
	this->setS(obj.getS());
	std::cout << "PresidentialPardonForm copy assignement operator.\n";
	return (*this);

}

std::string	PresidentialPardonForm::getTarget(void)
{
	return (target);
}

void	PresidentialPardonForm::executeAction(void) const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getS() == 1 && executor.getGrade() <= this->getGrade_exec())
	{
		executeAction();
	}
	else
	{
		throw(AForm::GradeTooLowException());
	}
}